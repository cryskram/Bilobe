#include <iostream>
#include <vector>

/* Global Vars */

//Syntax vector
std::vector<std::string> syntax{"lnp()", "exit()", "lens()", "leni()"};
std::vector<std::string> examples{lnpEx, exitEx, lensEx, leniEx};

// Help Text
std::string introText = "Bilobe[1.0.0] :-: A Programming Language Made Simple To Code\nType !syn or !eg to get the available syntax or examples in Bilobe[1.0.0]";
std::string dashes = "-------------------------------------------------------------------------";

// Components of an input
std::string lineDis = ">>> ";
std::string printPrefix = "lnp(\"";
std::string printSuffix = "\")";
std::string helpText = "!syn";
std::string egText = "!eg";
std::string exitCommand = "exit(bi)";
std::string lenString = "lens";
std::string lenStringPre = "lens(\"";
std::string lenStringSuff = "\")";
std::string lenInt = "leni";
std::string lenIntPre = "leni(";
std::string lenIntSuff = ")";

// Errors
std::string printNotEnd = "[lnp() Syntax Voilation...]\nThe lnp() syntax should end with \")";
std::string noSyntax = "No Such Syntax in Bilobe[1.0.0]\nPlease go through the Bilobe Documentation";
std::string exitText = "Exiting Bilobe[1.0.0]...";
std::string whiteSError = "[Whitespace Error]...\nPlease remove the whitespaces at the end of the code";
std::string missingCloseBrac = "[Unclosed Error]...\nPlease add a closing bracket \") or ')', according to the function, at the end";

// Suggestions
std::string isLen = "Did you mean leni() or lens()...";

// Examples Codes for !usage
std::string lnpEx = "lnp() - lnp(\"Hello Bilobe\") -> Hello Bilobe";
std::string exitEx = "exit() - exit(bi) -> Exits Bilobe";
std::string lensEx = "lens() - lens(\"Bilobe\") -> 6";
std::string leniEx = "leni() - leni(1234) -> 4";