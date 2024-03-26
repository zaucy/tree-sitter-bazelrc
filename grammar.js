function sep1(rule) {
  return seq(rule, repeat(seq(/[ \t]+/, rule)));
}

function sep(rule) {
  return optional(sep1(rule));
}

module.exports = grammar({
	name: 'bazelrc',
	extras: _ => [],
	rules: {
		source_file: $ => repeat(choice($.comment, $.try_import, $.import, $.command, $._emptyline)),
		comment: $ => seq('#', /.*/, $._newline),

		_newline: _ => /\r?\n/,
		_blank: _ => /[ \t]/,
		_emptyline: _ => /[ \t]*\r?\n/,

		option: _ => /[^\s]+/,

		command: $ => seq(
			field("name", $.command_name),
			optional(seq(
				':',
				field("config", $.config_name),
			)),
			$._blank,
			sep($.option),
			$._newline,
		),

		command_name: _ => /[a-z][a-z_\-]+/,
		config_name: _ => /[a-z][a-z_\-]+/,

		import_path: _ => /[a-z0-9\/\\%\.~_\-]+/i,
		try_import: $ => seq('try-import', $._blank, $.import_path, $._newline),
		import: $ => seq('import', $._blank, $.import_path, $._newline),
	}
});

