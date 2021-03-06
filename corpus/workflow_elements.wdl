==================
Empty Workflow
==================

workflow name {


}

---

(definition  (document (workflow (identifier))))
==================
Scatter Example
==================

workflow jointCallingGenotypes {
    scatter (sample in inputSamples) {
        call HaplotypeCallerERC {
          input: GATK=gatk,
            RefFasta=refFasta
        }
}

}
---
(definition (document (workflow (identifier)
(workflow_element
  (scatter (scatter_iteration_statment (identifier) (expression (identifier)))
    (scatter_body
        (workflow_element
            (call (namespaced_identifier (identifier))
                  (call_body
                    (inputs (variable_mappings
                      (variable_mapping_kv (identifier) (expression (identifier)))
                      (variable_mapping_kv (identifier) (expression (identifier)))
                                                      )))
                          )))))
                          )))
==================
Complex Workflow w/ no command
==================
workflow jointCallingGenotypes {

  File inputSamplesFile
  Array[Array[File]] inputSamples = read_tsv(inputSamplesFile)
  File gatk
  File refFasta
  File refIndex
  File refDict

  scatter (sample in inputSamples) {
    call HaplotypeCallerERC {
      input: GATK=gatk,
        RefFasta=refFasta,
        RefIndex=refIndex,
        RefDict=refDict,
        sampleName=sample[0],
        bamFile=sample[1],
        bamIndex=sample[2]
    }
  }

}

task HaplotypeCallerERC {

  File GATK
  File RefFasta
  File RefIndex
  File RefDict
  String sampleName
  File bamFile
  File bamIndex

  output {
    File GVCF = "${sampleName}_rawLikelihoods.g.vcf"
  }
}


----

(definition
        (document
              (workflow (identifier)
                        (workflow_element
                                (declaration (type (primitive_type)) (identifier)))
                        (workflow_element
                                (declaration
                                      (type
                                          (array_type (array_type (primitive_type))))
                                                      (identifier) (expression (function_expression (expression (identifier)) (expression (identifier))))))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element
                                    (scatter (scatter_iteration_statment (identifier) (expression (identifier)))
                                      (scatter_body
                                          (workflow_element
                                              (call (namespaced_identifier (identifier))
                                                    (call_body
                                                            (inputs (variable_mappings (variable_mapping_kv (identifier) (expression (identifier)))
                                                                                        (variable_mapping_kv (identifier) (expression (identifier)))
                                                                                        (variable_mapping_kv (identifier) (expression (identifier)))
                                                                                        (variable_mapping_kv (identifier) (expression (identifier)))
                                                                                        (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))
                                                                                        (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))
                                                                                        (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))

                                                                                        )))
                                                            ))))))
            (task (identifier)
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                      (task_sections
                        (task_output
                           (task_output_kv
                             (type (primitive_type))
                                 (identifier)
                                   (string_literal)))))
              )
)


==================
Complex Workflow w/ command
==================
workflow jointCallingGenotypes {

  File inputSamplesFile
  Array[Array[File]] inputSamples = read_tsv(inputSamplesFile)
  File gatk
  File refFasta
  File refIndex
  File refDict

  scatter (sample in inputSamples) {
    call HaplotypeCallerERC {
      input: GATK=gatk,
        RefFasta=refFasta,
        RefIndex=refIndex,
        RefDict=refDict,
        sampleName=sample[0],
        bamFile=sample[1],
        bamIndex=sample[2]
    }
  }

}

task HaplotypeCallerERC {

  File GATK
  File RefFasta
  File RefIndex
  File RefDict
  String sampleName
  File bamFile
  File bamIndex

  command {
    java -jar ${GATK} \
        -T HaplotypeCaller \
        -ERC GVCF \
        -R ${RefFasta} \
        -I ${bamFile} \
        -o ${sampleName}_rawLikelihoods.g.vcf
  }
  output {
    File GVCF = "${sampleName}_rawLikelihoods.g.vcf"
  }
}


----


(definition
        (document
              (workflow (identifier)
                        (workflow_element
                                (declaration (type (primitive_type)) (identifier)))
                        (workflow_element
                                (declaration
                                      (type
                                          (array_type (array_type (primitive_type))))
                                                      (identifier) (expression (function_expression (expression (identifier)) (expression (identifier))))))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element (declaration (type (primitive_type)) (identifier)))
                                  (workflow_element
                                    (scatter (scatter_iteration_statment (identifier) (expression (identifier)))
                                      (scatter_body
                                          (workflow_element
                                              (call (namespaced_identifier (identifier))
                                                    (call_body
                                                            (inputs (variable_mappings (variable_mapping_kv (identifier) (expression (identifier)))
                                                            (variable_mapping_kv (identifier) (expression (identifier)))
                                                            (variable_mapping_kv (identifier) (expression (identifier)))
                                                            (variable_mapping_kv (identifier) (expression (identifier)))
                                                            (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))
                                                            (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))
                                                            (variable_mapping_kv (identifier) (expression (indexing_expression (expression (identifier)) (expression (integer)))))
                                                            )))
                                                            ))))))
            (task (identifier)
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                    (declaration (type (primitive_type)) (identifier))
                      (task_sections
                            (command
                                (command_part (command_part_string)) )
                                (command_part (command_part_var (expression (identifier))))
                                                                          )
                                (command_part (command_part_var (expression (identifier)))))
                                (command_part (command_part_var (expression (identifier)))))
                                (command_part (command_part_var (expression (identifier))))))
                    (task_output (task_output_kv (type (primitive_type)) (identifier) (string_literal)))))
              )
)
