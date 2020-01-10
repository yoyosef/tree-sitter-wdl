==================
Array Init
==================

Array[Int]

---

(definition (type (array_type (primitive_type))))


==================
Simple Map
==================

Map[Int, Object]
---
(definition (type (map_type (primitive_type) (object_type))))


==================
Array in Map
==================

Map[Int, Array[Int]]
---
(definition (type (map_type (primitive_type) (array_type (primitive_type)))))

==================
Postfix Type Test
==================

Array[Int]?

---
(definition (type (array_type (primitive_type)) (type_postfix_quantifier)))
