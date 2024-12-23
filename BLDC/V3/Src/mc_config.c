FreeMarker template error (DEBUG mode; use RETHROW in production!):
Template inclusion failed (for parameter value "*/ftl/header.ftl"):
Template not found for name "*/ftl/header.ftl".
The name was interpreted by this TemplateLoader: MultiTemplateLoader(loader1 = FileTemplateLoader(baseDir="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3", canonicalBasePath="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3\"), loader2 = FileTemplateLoader(baseDir="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3", canonicalBasePath="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3\"), loader3 = FileTemplateLoader(baseDir="C:\Users\thann\AppData\Local\Programs\STM32CubeMX\db\templates", canonicalBasePath="C:\Users\thann\AppData\Local\Programs\STM32CubeMX\db\templates\")).

----
FTL stack trace ("~" means nesting-related):
	- Failed at: #include "*/ftl/header.ftl"  [in template "mc_config_sixstep.c.ftl" at line 2, column 1]
----

Java stack trace (for programmers):
----
freemarker.core._MiscTemplateException: [... Exception message was already printed; see it above ...]
	at freemarker.core.Include.accept(Include.java:164)
	at freemarker.core.Environment.visit(Environment.java:334)
	at freemarker.core.Environment.visit(Environment.java:340)
	at freemarker.core.Environment.process(Environment.java:313)
	at freemarker.template.Template.process(Template.java:383)
	at com.st.microxplorer.codegenerator.CodeEngine.freemarkerDo(CodeEngine.java:410)
	at com.st.microxplorer.codegenerator.CodeEngine.genCode(CodeEngine.java:263)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateOutputCode(CodeGenerator.java:5928)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateSpecificCode(CodeGenerator.java:4930)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateSpecificCodeFile(CodeGenerator.java:1758)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateCodeFiles(CodeGenerator.java:2029)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateDefaultConfig(CodeGenerator.java:10169)
	at com.st.microxplorer.codegenerator.CodeGenerator.generateCode(CodeGenerator.java:1505)
	at com.st.microxplorer.plugins.projectmanager.engine.ProjectBuilder.generateCode(ProjectBuilder.java:2987)
	at com.st.microxplorer.plugins.projectmanager.engine.ProjectBuilder.createCode(ProjectBuilder.java:2173)
	at com.st.microxplorer.plugins.projectmanager.engine.ProjectBuilder.createProject(ProjectBuilder.java:800)
	at com.st.microxplorer.plugins.projectmanager.engine.GenerateProjectThread.run(GenerateProjectThread.java:61)
Caused by: freemarker.template.TemplateNotFoundException: Template not found for name "*/ftl/header.ftl".
The name was interpreted by this TemplateLoader: MultiTemplateLoader(loader1 = FileTemplateLoader(baseDir="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3", canonicalBasePath="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3\"), loader2 = FileTemplateLoader(baseDir="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3", canonicalBasePath="C:\Users\thann\OneDrive\Desktop\D\FRA231\LAB2\V3\"), loader3 = FileTemplateLoader(baseDir="C:\Users\thann\AppData\Local\Programs\STM32CubeMX\db\templates", canonicalBasePath="C:\Users\thann\AppData\Local\Programs\STM32CubeMX\db\templates\")).
	at freemarker.template.Configuration.getTemplate(Configuration.java:2869)
	at freemarker.core.Environment.getTemplateForInclusion(Environment.java:2883)
	at freemarker.core.Include.accept(Include.java:162)
	... 16 more
