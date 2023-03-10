// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		RETURN=10, CONST=11, COMMENT=12, DIRECTIVE=13, WS=14, VAR=15;
	public static final int
		RULE_axiom = 0, RULE_prog = 1, RULE_code = 2, RULE_instruction = 3, RULE_id = 4, 
		RULE_type = 5;
	private static String[] makeRuleNames() {
		return new String[] {
			"axiom", "prog", "code", "instruction", "id", "type"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'int'", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'string'", 
			"'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "RETURN", 
			"CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ifccParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class AxiomContext extends ParserRuleContext {
		public ProgContext prog() {
			return getRuleContext(ProgContext.class,0);
		}
		public AxiomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_axiom; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAxiom(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAxiom(this);
		}
	}

	public final AxiomContext axiom() throws RecognitionException {
		AxiomContext _localctx = new AxiomContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_axiom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(12);
			prog();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgContext extends ParserRuleContext {
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public TerminalNode RETURN() { return getToken(ifccParser.RETURN, 0); }
		public IdContext id() {
			return getRuleContext(IdContext.class,0);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(14);
			match(T__0);
			setState(15);
			match(T__1);
			setState(16);
			match(T__2);
			setState(17);
			match(T__3);
			setState(18);
			match(T__4);
			setState(19);
			code();
			setState(20);
			match(RETURN);
			setState(21);
			id();
			setState(22);
			match(T__5);
			setState(23);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeContext extends ParserRuleContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public CodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterCode(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitCode(this);
		}
	}

	public final CodeContext code() throws RecognitionException {
		CodeContext _localctx = new CodeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_code);
		try {
			setState(32);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(25);
				instruction();
				setState(26);
				match(T__5);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(28);
				instruction();
				setState(29);
				match(T__5);
				setState(30);
				code();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InstructionContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public IdContext id() {
			return getRuleContext(IdContext.class,0);
		}
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterInstruction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitInstruction(this);
		}
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_instruction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			type();
			setState(35);
			match(VAR);
			setState(36);
			match(T__7);
			setState(37);
			id();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdContext extends ParserRuleContext {
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public IdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterId(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitId(this);
		}
	}

	public final IdContext id() throws RecognitionException {
		IdContext _localctx = new IdContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_id);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(39);
			_la = _input.LA(1);
			if ( !(_la==CONST || _la==VAR) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitType(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(41);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__8) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\21.\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4#\n\4\3\5\3\5\3\5\3\5"+
		"\3\5\3\6\3\6\3\7\3\7\3\7\2\2\b\2\4\6\b\n\f\2\4\4\2\r\r\21\21\4\2\3\3\13"+
		"\13\2(\2\16\3\2\2\2\4\20\3\2\2\2\6\"\3\2\2\2\b$\3\2\2\2\n)\3\2\2\2\f+"+
		"\3\2\2\2\16\17\5\4\3\2\17\3\3\2\2\2\20\21\7\3\2\2\21\22\7\4\2\2\22\23"+
		"\7\5\2\2\23\24\7\6\2\2\24\25\7\7\2\2\25\26\5\6\4\2\26\27\7\f\2\2\27\30"+
		"\5\n\6\2\30\31\7\b\2\2\31\32\7\t\2\2\32\5\3\2\2\2\33\34\5\b\5\2\34\35"+
		"\7\b\2\2\35#\3\2\2\2\36\37\5\b\5\2\37 \7\b\2\2 !\5\6\4\2!#\3\2\2\2\"\33"+
		"\3\2\2\2\"\36\3\2\2\2#\7\3\2\2\2$%\5\f\7\2%&\7\21\2\2&\'\7\n\2\2\'(\5"+
		"\n\6\2(\t\3\2\2\2)*\t\2\2\2*\13\3\2\2\2+,\t\3\2\2,\r\3\2\2\2\3\"";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}