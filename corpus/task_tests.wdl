==================
Simple task test
==================
task start {

  command <<<
    aa ${aaaac}
  >>>
  runtime{

  }
  output{

  }
}
---
(definition (document (task (identifier)


(task_sections
      (command
            (command_part  (command_part_string))
            (command_part  (command_part_var (expression (identifier))))

      )

      (runtime)
      (task_output)))))


==================
Simple runtime test
==================
task start {

  command <<<
    aa ${aaaac}
  >>>
  runtime{
    docker: "stub"
  }
  output{

  }
}
---
(definition (document (task (identifier)


(task_sections
      (command
            (command_part  (command_part_string))
            (command_part  (command_part_var (expression (identifier))))

      )

      (runtime (runtime_kv (identifier) (expression (string_literal))))
      (task_output)))))

==================
Task w/ complex command
==================
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
        -T HaplotypeCaller
  }
  output {
    File GVCF = "${sampleName}_rawLikelihoods.g.vcf"
  }
}
---
(definition (document (task (identifier)
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
        (task_output (task_output_kv (type (primitive_type)) (identifier) (string_literal)))))
  ))
