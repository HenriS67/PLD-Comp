
// Generated from ifcc.g4 by ANTLR 4.9.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}


antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    prog();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ProgContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::IdContext* ifccParser::ProgContext::id() {
  return getRuleContext<ifccParser::IdContext>(0);
}

ifccParser::CodeContext* ifccParser::ProgContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}


antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    match(ifccParser::T__0);
    setState(15);
    match(ifccParser::T__1);
    setState(16);
    match(ifccParser::T__2);
    setState(17);
    match(ifccParser::T__3);
    setState(18);
    match(ifccParser::T__4);
    setState(20);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__0

    || _la == ifccParser::T__8) {
      setState(19);
      code();
    }
    setState(22);
    match(ifccParser::RETURN);
    setState(23);
    id();
    setState(24);
    match(ifccParser::T__5);
    setState(25);
    match(ifccParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

ifccParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::InstructionContext* ifccParser::CodeContext::instruction() {
  return getRuleContext<ifccParser::InstructionContext>(0);
}

ifccParser::CodeContext* ifccParser::CodeContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}


size_t ifccParser::CodeContext::getRuleIndex() const {
  return ifccParser::RuleCode;
}


antlrcpp::Any ifccParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::CodeContext* ifccParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      instruction();
      setState(28);
      match(ifccParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(30);
      instruction();
      setState(31);
      match(ifccParser::T__5);
      setState(32);
      code();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ifccParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::InstructionContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::InstructionContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::IdContext* ifccParser::InstructionContext::id() {
  return getRuleContext<ifccParser::IdContext>(0);
}


size_t ifccParser::InstructionContext::getRuleIndex() const {
  return ifccParser::RuleInstruction;
}


antlrcpp::Any ifccParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::InstructionContext* ifccParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    type();
    setState(37);
    match(ifccParser::VAR);
    setState(38);
    match(ifccParser::T__7);
    setState(39);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

ifccParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::IdContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

tree::TerminalNode* ifccParser::IdContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}


size_t ifccParser::IdContext::getRuleIndex() const {
  return ifccParser::RuleId;
}


antlrcpp::Any ifccParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::IdContext* ifccParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleId);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _la = _input->LA(1);
    if (!(_la == ifccParser::CONST

    || _la == ifccParser::VAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}


antlrcpp::Any ifccParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    _la = _input->LA(1);
    if (!(_la == ifccParser::T__0

    || _la == ifccParser::T__8)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "code", "instruction", "id", "type"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'string'", 
  "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "RETURN", "CONST", "COMMENT", 
  "DIRECTIVE", "WS", "VAR"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x11, 0x30, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x17, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x25, 0xa, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0x2, 0x4, 0x4, 0x2, 0xd, 0xd, 0x11, 0x11, 0x4, 0x2, 0x3, 
       0x3, 0xb, 0xb, 0x2, 0x2b, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 0x4, 0x10, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x26, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0xf, 0x5, 0x4, 0x3, 0x2, 0xf, 0x3, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x11, 0x7, 0x3, 0x2, 0x2, 0x11, 0x12, 0x7, 0x4, 0x2, 0x2, 
       0x12, 0x13, 0x7, 0x5, 0x2, 0x2, 0x13, 0x14, 0x7, 0x6, 0x2, 0x2, 0x14, 
       0x16, 0x7, 0x7, 0x2, 0x2, 0x15, 0x17, 0x5, 0x6, 0x4, 0x2, 0x16, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x19, 0x7, 0xc, 0x2, 0x2, 0x19, 0x1a, 0x5, 0xa, 
       0x6, 0x2, 0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x9, 0x2, 
       0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x8, 0x5, 0x2, 
       0x1e, 0x1f, 0x7, 0x8, 0x2, 0x2, 0x1f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x21, 0x5, 0x8, 0x5, 0x2, 0x21, 0x22, 0x7, 0x8, 0x2, 0x2, 0x22, 0x23, 
       0x5, 0x6, 0x4, 0x2, 0x23, 0x25, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x25, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x27, 0x5, 0xc, 0x7, 0x2, 0x27, 0x28, 0x7, 0x11, 
       0x2, 0x2, 0x28, 0x29, 0x7, 0xa, 0x2, 0x2, 0x29, 0x2a, 0x5, 0xa, 0x6, 
       0x2, 0x2a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x9, 0x2, 0x2, 0x2, 
       0x2c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x9, 0x3, 0x2, 0x2, 0x2e, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x24, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
