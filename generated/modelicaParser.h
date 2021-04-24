
// Generated from modelica.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  modelicaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, IDENT = 89, STRING = 90, UNSIGNED_NUMBER = 91, 
    WS = 92, COMMENT = 93, LINE_COMMENT = 94
  };

  enum {
    RuleStored_definition = 0, RuleClass_definition = 1, RuleClass_specifier = 2, 
    RuleClass_prefixes = 3, RuleLong_class_specifier = 4, RuleShort_class_specifier = 5, 
    RuleDer_class_specifier = 6, RuleBase_prefix = 7, RuleEnum_list = 8, 
    RuleEnumeration_literal = 9, RuleComposition = 10, RuleLanguage_specification = 11, 
    RuleExternal_function_call = 12, RuleElement_list = 13, RuleElement = 14, 
    RuleImport_clause = 15, RuleImport_list = 16, RuleExtends_clause = 17, 
    RuleConstraining_clause = 18, RuleComponent_clause = 19, RuleType_prefix = 20, 
    RuleType_specifier = 21, RuleComponent_list = 22, RuleComponent_declaration = 23, 
    RuleCondition_attribute = 24, RuleDeclaration = 25, RuleModification = 26, 
    RuleClass_modification = 27, RuleArgument_list = 28, RuleArgument = 29, 
    RuleElement_modification_or_replaceable = 30, RuleElement_modification = 31, 
    RuleElement_redeclaration = 32, RuleElement_replaceable = 33, RuleComponent_clause1 = 34, 
    RuleComponent_declaration1 = 35, RuleShort_class_definition = 36, RuleEquation_section = 37, 
    RuleAlgorithm_section = 38, RuleEquation = 39, RuleStatement = 40, RuleIf_equation = 41, 
    RuleIf_statement = 42, RuleFor_equation = 43, RuleFor_statement = 44, 
    RuleFor_indices = 45, RuleFor_index = 46, RuleWhile_statement = 47, 
    RuleWhen_equation = 48, RuleWhen_statement = 49, RuleConnect_clause = 50, 
    RuleExpression = 51, RuleSimple_expression = 52, RuleLogical_expression = 53, 
    RuleLogical_term = 54, RuleLogical_factor = 55, RuleRelation = 56, RuleRel_op = 57, 
    RuleArithmetic_expression = 58, RuleAdd_op = 59, RuleTerm = 60, RuleMul_op = 61, 
    RuleFactor = 62, RulePrimary = 63, RuleName = 64, RuleComponent_reference = 65, 
    RuleFunction_call_args = 66, RuleFunction_arguments = 67, RuleNamed_arguments = 68, 
    RuleNamed_argument = 69, RuleFunction_argument = 70, RuleOutput_expression_list = 71, 
    RuleExpression_list = 72, RuleArray_subscripts = 73, RuleSubscript = 74, 
    RuleComment = 75, RuleString_comment = 76, RuleAnnotation = 77
  };

  modelicaParser(antlr4::TokenStream *input);
  ~modelicaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Stored_definitionContext;
  class Class_definitionContext;
  class Class_specifierContext;
  class Class_prefixesContext;
  class Long_class_specifierContext;
  class Short_class_specifierContext;
  class Der_class_specifierContext;
  class Base_prefixContext;
  class Enum_listContext;
  class Enumeration_literalContext;
  class CompositionContext;
  class Language_specificationContext;
  class External_function_callContext;
  class Element_listContext;
  class ElementContext;
  class Import_clauseContext;
  class Import_listContext;
  class Extends_clauseContext;
  class Constraining_clauseContext;
  class Component_clauseContext;
  class Type_prefixContext;
  class Type_specifierContext;
  class Component_listContext;
  class Component_declarationContext;
  class Condition_attributeContext;
  class DeclarationContext;
  class ModificationContext;
  class Class_modificationContext;
  class Argument_listContext;
  class ArgumentContext;
  class Element_modification_or_replaceableContext;
  class Element_modificationContext;
  class Element_redeclarationContext;
  class Element_replaceableContext;
  class Component_clause1Context;
  class Component_declaration1Context;
  class Short_class_definitionContext;
  class Equation_sectionContext;
  class Algorithm_sectionContext;
  class EquationContext;
  class StatementContext;
  class If_equationContext;
  class If_statementContext;
  class For_equationContext;
  class For_statementContext;
  class For_indicesContext;
  class For_indexContext;
  class While_statementContext;
  class When_equationContext;
  class When_statementContext;
  class Connect_clauseContext;
  class ExpressionContext;
  class Simple_expressionContext;
  class Logical_expressionContext;
  class Logical_termContext;
  class Logical_factorContext;
  class RelationContext;
  class Rel_opContext;
  class Arithmetic_expressionContext;
  class Add_opContext;
  class TermContext;
  class Mul_opContext;
  class FactorContext;
  class PrimaryContext;
  class NameContext;
  class Component_referenceContext;
  class Function_call_argsContext;
  class Function_argumentsContext;
  class Named_argumentsContext;
  class Named_argumentContext;
  class Function_argumentContext;
  class Output_expression_listContext;
  class Expression_listContext;
  class Array_subscriptsContext;
  class SubscriptContext;
  class CommentContext;
  class String_commentContext;
  class AnnotationContext; 

  class  Stored_definitionContext : public antlr4::ParserRuleContext {
  public:
    Stored_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_definitionContext *> class_definition();
    Class_definitionContext* class_definition(size_t i);
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Stored_definitionContext* stored_definition();

  class  Class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_prefixesContext *class_prefixes();
    Class_specifierContext *class_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_definitionContext* class_definition();

  class  Class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Long_class_specifierContext *long_class_specifier();
    Short_class_specifierContext *short_class_specifier();
    Der_class_specifierContext *der_class_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_specifierContext* class_specifier();

  class  Class_prefixesContext : public antlr4::ParserRuleContext {
  public:
    Class_prefixesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_prefixesContext* class_prefixes();

  class  Long_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Long_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    String_commentContext *string_comment();
    CompositionContext *composition();
    Class_modificationContext *class_modification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Long_class_specifierContext* long_class_specifier();

  class  Short_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Short_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Base_prefixContext *base_prefix();
    NameContext *name();
    CommentContext *comment();
    Array_subscriptsContext *array_subscripts();
    Class_modificationContext *class_modification();
    Enum_listContext *enum_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Short_class_specifierContext* short_class_specifier();

  class  Der_class_specifierContext : public antlr4::ParserRuleContext {
  public:
    Der_class_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    NameContext *name();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Der_class_specifierContext* der_class_specifier();

  class  Base_prefixContext : public antlr4::ParserRuleContext {
  public:
    Base_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_prefixContext *type_prefix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Base_prefixContext* base_prefix();

  class  Enum_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enumeration_literalContext *> enumeration_literal();
    Enumeration_literalContext* enumeration_literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_listContext* enum_list();

  class  Enumeration_literalContext : public antlr4::ParserRuleContext {
  public:
    Enumeration_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enumeration_literalContext* enumeration_literal();

  class  CompositionContext : public antlr4::ParserRuleContext {
  public:
    CompositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Element_listContext *> element_list();
    Element_listContext* element_list(size_t i);
    std::vector<Equation_sectionContext *> equation_section();
    Equation_sectionContext* equation_section(size_t i);
    std::vector<Algorithm_sectionContext *> algorithm_section();
    Algorithm_sectionContext* algorithm_section(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    Language_specificationContext *language_specification();
    External_function_callContext *external_function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompositionContext* composition();

  class  Language_specificationContext : public antlr4::ParserRuleContext {
  public:
    Language_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Language_specificationContext* language_specification();

  class  External_function_callContext : public antlr4::ParserRuleContext {
  public:
    External_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Component_referenceContext *component_reference();
    Expression_listContext *expression_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  External_function_callContext* external_function_call();

  class  Element_listContext : public antlr4::ParserRuleContext {
  public:
    Element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_listContext* element_list();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_clauseContext *import_clause();
    Extends_clauseContext *extends_clause();
    Class_definitionContext *class_definition();
    Component_clauseContext *component_clause();
    Constraining_clauseContext *constraining_clause();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementContext* element();

  class  Import_clauseContext : public antlr4::ParserRuleContext {
  public:
    Import_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    antlr4::tree::TerminalNode *IDENT();
    NameContext *name();
    Import_listContext *import_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_clauseContext* import_clause();

  class  Import_listContext : public antlr4::ParserRuleContext {
  public:
    Import_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Import_listContext* import_list();

  class  Extends_clauseContext : public antlr4::ParserRuleContext {
  public:
    Extends_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Class_modificationContext *class_modification();
    AnnotationContext *annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Extends_clauseContext* extends_clause();

  class  Constraining_clauseContext : public antlr4::ParserRuleContext {
  public:
    Constraining_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Class_modificationContext *class_modification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Constraining_clauseContext* constraining_clause();

  class  Component_clauseContext : public antlr4::ParserRuleContext {
  public:
    Component_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_prefixContext *type_prefix();
    Type_specifierContext *type_specifier();
    Component_listContext *component_list();
    Array_subscriptsContext *array_subscripts();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_clauseContext* component_clause();

  class  Type_prefixContext : public antlr4::ParserRuleContext {
  public:
    Type_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_prefixContext* type_prefix();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_specifierContext* type_specifier();

  class  Component_listContext : public antlr4::ParserRuleContext {
  public:
    Component_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Component_declarationContext *> component_declaration();
    Component_declarationContext* component_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_listContext* component_list();

  class  Component_declarationContext : public antlr4::ParserRuleContext {
  public:
    Component_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    CommentContext *comment();
    Condition_attributeContext *condition_attribute();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_declarationContext* component_declaration();

  class  Condition_attributeContext : public antlr4::ParserRuleContext {
  public:
    Condition_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Condition_attributeContext* condition_attribute();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Array_subscriptsContext *array_subscripts();
    ModificationContext *modification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  ModificationContext : public antlr4::ParserRuleContext {
  public:
    ModificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_modificationContext *class_modification();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModificationContext* modification();

  class  Class_modificationContext : public antlr4::ParserRuleContext {
  public:
    Class_modificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Argument_listContext *argument_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_modificationContext* class_modification();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_listContext* argument_list();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_modification_or_replaceableContext *element_modification_or_replaceable();
    Element_redeclarationContext *element_redeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentContext* argument();

  class  Element_modification_or_replaceableContext : public antlr4::ParserRuleContext {
  public:
    Element_modification_or_replaceableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_modificationContext *element_modification();
    Element_replaceableContext *element_replaceable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_modification_or_replaceableContext* element_modification_or_replaceable();

  class  Element_modificationContext : public antlr4::ParserRuleContext {
  public:
    Element_modificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    String_commentContext *string_comment();
    ModificationContext *modification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_modificationContext* element_modification();

  class  Element_redeclarationContext : public antlr4::ParserRuleContext {
  public:
    Element_redeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Element_replaceableContext *element_replaceable();
    Short_class_definitionContext *short_class_definition();
    Component_clause1Context *component_clause1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_redeclarationContext* element_redeclaration();

  class  Element_replaceableContext : public antlr4::ParserRuleContext {
  public:
    Element_replaceableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Short_class_definitionContext *short_class_definition();
    Component_clause1Context *component_clause1();
    Constraining_clauseContext *constraining_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Element_replaceableContext* element_replaceable();

  class  Component_clause1Context : public antlr4::ParserRuleContext {
  public:
    Component_clause1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_prefixContext *type_prefix();
    Type_specifierContext *type_specifier();
    Component_declaration1Context *component_declaration1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_clause1Context* component_clause1();

  class  Component_declaration1Context : public antlr4::ParserRuleContext {
  public:
    Component_declaration1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_declaration1Context* component_declaration1();

  class  Short_class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Short_class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_prefixesContext *class_prefixes();
    Short_class_specifierContext *short_class_specifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Short_class_definitionContext* short_class_definition();

  class  Equation_sectionContext : public antlr4::ParserRuleContext {
  public:
    Equation_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Equation_sectionContext* equation_section();

  class  Algorithm_sectionContext : public antlr4::ParserRuleContext {
  public:
    Algorithm_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Algorithm_sectionContext* algorithm_section();

  class  EquationContext : public antlr4::ParserRuleContext {
  public:
    EquationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    Simple_expressionContext *simple_expression();
    ExpressionContext *expression();
    If_equationContext *if_equation();
    For_equationContext *for_equation();
    Connect_clauseContext *connect_clause();
    When_equationContext *when_equation();
    NameContext *name();
    Function_call_argsContext *function_call_args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquationContext* equation();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    Component_referenceContext *component_reference();
    Output_expression_listContext *output_expression_list();
    Function_call_argsContext *function_call_args();
    If_statementContext *if_statement();
    For_statementContext *for_statement();
    While_statementContext *while_statement();
    When_statementContext *when_statement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  If_equationContext : public antlr4::ParserRuleContext {
  public:
    If_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_equationContext* if_equation();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  For_equationContext : public antlr4::ParserRuleContext {
  public:
    For_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_indicesContext *for_indices();
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_equationContext* for_equation();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_indicesContext *for_indices();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_statementContext* for_statement();

  class  For_indicesContext : public antlr4::ParserRuleContext {
  public:
    For_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_indexContext *> for_index();
    For_indexContext* for_index(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_indicesContext* for_indices();

  class  For_indexContext : public antlr4::ParserRuleContext {
  public:
    For_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_indexContext* for_index();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_statementContext* while_statement();

  class  When_equationContext : public antlr4::ParserRuleContext {
  public:
    When_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<EquationContext *> equation();
    EquationContext* equation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_equationContext* when_equation();

  class  When_statementContext : public antlr4::ParserRuleContext {
  public:
    When_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  When_statementContext* when_statement();

  class  Connect_clauseContext : public antlr4::ParserRuleContext {
  public:
    Connect_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Component_referenceContext *> component_reference();
    Component_referenceContext* component_reference(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Connect_clauseContext* connect_clause();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_expressionContext *simple_expression();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_expressionContext *> logical_expression();
    Logical_expressionContext* logical_expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Simple_expressionContext* simple_expression();

  class  Logical_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logical_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_termContext *> logical_term();
    Logical_termContext* logical_term(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logical_expressionContext* logical_expression();

  class  Logical_termContext : public antlr4::ParserRuleContext {
  public:
    Logical_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Logical_factorContext *> logical_factor();
    Logical_factorContext* logical_factor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logical_termContext* logical_term();

  class  Logical_factorContext : public antlr4::ParserRuleContext {
  public:
    Logical_factorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Logical_factorContext* logical_factor();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arithmetic_expressionContext *> arithmetic_expression();
    Arithmetic_expressionContext* arithmetic_expression(size_t i);
    Rel_opContext *rel_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationContext* relation();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rel_opContext* rel_op();

  class  Arithmetic_expressionContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Add_opContext *> add_op();
    Add_opContext* add_op(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arithmetic_expressionContext* arithmetic_expression();

  class  Add_opContext : public antlr4::ParserRuleContext {
  public:
    Add_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Add_opContext* add_op();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Mul_opContext *> mul_op();
    Mul_opContext* mul_op(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermContext* term();

  class  Mul_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mul_opContext* mul_op();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimaryContext *> primary();
    PrimaryContext* primary(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FactorContext* factor();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNSIGNED_NUMBER();
    antlr4::tree::TerminalNode *STRING();
    Function_call_argsContext *function_call_args();
    NameContext *name();
    Component_referenceContext *component_reference();
    Output_expression_listContext *output_expression_list();
    std::vector<Expression_listContext *> expression_list();
    Expression_listContext* expression_list(size_t i);
    Function_argumentsContext *function_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  Component_referenceContext : public antlr4::ParserRuleContext {
  public:
    Component_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    std::vector<Array_subscriptsContext *> array_subscripts();
    Array_subscriptsContext* array_subscripts(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Component_referenceContext* component_reference();

  class  Function_call_argsContext : public antlr4::ParserRuleContext {
  public:
    Function_call_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_argumentsContext *function_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_call_argsContext* function_call_args();

  class  Function_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Function_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_argumentContext *function_argument();
    Function_argumentsContext *function_arguments();
    For_indicesContext *for_indices();
    Named_argumentsContext *named_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_argumentsContext* function_arguments();

  class  Named_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Named_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Named_argumentContext *named_argument();
    Named_argumentsContext *named_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_argumentsContext* named_arguments();

  class  Named_argumentContext : public antlr4::ParserRuleContext {
  public:
    Named_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Function_argumentContext *function_argument();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Named_argumentContext* named_argument();

  class  Function_argumentContext : public antlr4::ParserRuleContext {
  public:
    Function_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Named_argumentsContext *named_arguments();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_argumentContext* function_argument();

  class  Output_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Output_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Output_expression_listContext* output_expression_list();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_listContext* expression_list();

  class  Array_subscriptsContext : public antlr4::ParserRuleContext {
  public:
    Array_subscriptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubscriptContext *> subscript();
    SubscriptContext* subscript(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_subscriptsContext* array_subscripts();

  class  SubscriptContext : public antlr4::ParserRuleContext {
  public:
    SubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptContext* subscript();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_commentContext *string_comment();
    AnnotationContext *annotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();

  class  String_commentContext : public antlr4::ParserRuleContext {
  public:
    String_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  String_commentContext* string_comment();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_modificationContext *class_modification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

