==================
Multiplication and Addition Precedence
==================

1+2*2

---

(definition (expression (binary_expression
            (expression (integer))
                    (expression (binary_expression
                            (expression (integer)) (expression (integer)))))))


==================
Unary and Addition Precedence 1
==================

1+-2

---

(definition (expression (binary_expression
          (expression (integer))
          (expression (unary_expression (expression (integer))))
          )
        )
       )

==================
Unary and Addition Precedence 2
==================

+1-2

---
(definition (expression (binary_expression
          (expression (unary_expression
          (expression (integer)))) (expression (integer)))))


==================
Equality
==================

3 == 2

---

(definition
        (expression (binary_expression
                                (expression (integer))
                                (expression (integer))))
)

==================
Not Equality
==================

3 != 2

---
(definition
        (expression (binary_expression
                                (expression (integer))
                                (expression (integer))))
)
==================
Relational Expression
==================
3 > 2
---
(definition (expression (binary_expression (expression (integer)) (expression (integer)))))

==================
Bracket Expression
==================
[1+2*2]
---
(definition (expression (bracket_expression (expression (binary_expression
            (expression (integer))
                    (expression (binary_expression
                            (expression (integer)) (expression (integer)))))))))


==================
Complex Equality
==================

1 + 3 == 2

---

(definition
        (expression
              (binary_expression
                            (expression (binary_expression
                                          (expression (integer))
                                          (expression (integer))))
                            (expression (integer))
              )
        )
)


==================
If Then Expression
==================

if 1 + 3 == 2 then "Day" else "Morning"

---

(definition (expression (if_then_expression
          (expression (binary_expression
              (expression (binary_expression
              (expression (integer)) (expression (integer))
              ))
            (expression (integer)))
          )

        (expression (string_literal)) (expression (string_literal))
        )))

==================
Empty Dictionary
==================
{ }
---
(definition (expression (dictionary_expression)))

==================
Dictionary w/ values
==================
{1: "3", 2: "5"}
---
(definition
    (expression
       (dictionary_expression
          (expression (integer)) (expression (string_literal))
          (expression (integer)) (expression (string_literal))
      )
    )
)

==================
Empty Array
==================
[ ]
---
(definition (expression (bracket_expression)))


==================
Array w/ values
==================
[1, 2]

---
(definition
    (expression
       (bracket_expression
          (expression (integer))
          (expression (integer))
      )
    )
)
==================
Empty Function Call
==================
func()
---
(definition (expression (function_expression (expression (identifier)))))

==================
Function Call
==================
func(inputSamplesFile)
---
(definition (expression
              (function_expression
                (expression (identifier))
                (expression (identifier))
              )
            )
)

==================
String - Double Quotes
==================
"Hi, how are you?"
---
(definition (expression (string_literal)))

==================
String with dash - Double Quotes
==================

"f-fefe--f"
---
(definition (expression (string_literal)))

==================
String - Single Quote
==================
'Hi, how are you?'
---
(definition (expression (string_literal)))

==================
String with dash - Single Quote
==================

'f-fefe--f'
---
(definition (expression (string_literal)))
