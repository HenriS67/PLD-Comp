// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ifccParser}.
 */
public interface ifccListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void enterAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void exitAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ifccParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ifccParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void enterCode(ifccParser.CodeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void exitCode(ifccParser.CodeContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterInstruction(ifccParser.InstructionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitInstruction(ifccParser.InstructionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(ifccParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(ifccParser.IdContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(ifccParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(ifccParser.TypeContext ctx);
}