=====================
Call Test
=====================

call identifier {

    input:
      gatk="/net/gatk/",
      bam=output.bam_file
}
---

(definition
        (call
          (namespaced_identifier (identifier))
              (call_body
                (inputs
                    (variable_mappings
                            (variable_mapping_kv (identifier)
                                (expression (string_literal)))
                            (variable_mapping_kv (identifier)
                                (expression (member_access_expression (expression (identifier))
                                  (expression (identifier))))))))))
