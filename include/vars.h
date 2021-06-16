#include <iostream>
#include <vector>

/* Global Vars */
std::string version = "1.3.0";

// Help Text
std::string introText = "Bilobe[" + version + "] :-: A Programming Language Made Simple To Code\nType !syn to get the available grammar in Bilobe[" + version + "]";
std::string dashes = "-------------------------------------------------------------------------";

// Components of an input
std::string lineDis = ":--: ";
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
std::string comment = "#";

// Errors
std::string printNotEnd = "[lnp() Syntax Voilation...]\nThe lnp() syntax should end with \")";
std::string noSyntax = "No Such Syntax in Bilobe[" + version + "]\nPlease go through the Bilobe Documentation";
std::string exitText = "Exiting Bilobe[" + version + "]...";
std::string whiteSError = "[Whitespace Error]...\nPlease remove the whitespaces at the end of the code";
std::string missingCloseBrac = "[Unclosed Error]...\nPlease add a closing bracket \") or ')', according to the function, at the end";

// Suggestions
std::string isLen = "Did you mean leni() or lens()...";

// Help var
std::string helpVar = "| Grammsrs |       Examples              |     Result      |            Description               |\n"
                      "| -------- | ------------------------    | --------------- | ------------------------------------ |\n"
                      "| lnp()    | lnp(\" I am Bilobe \")        |   I am Bilobe   | Prints the text                      |\n"
                      "| lens()   | lens(\"Bilobe\")              |       6         | Prints the length of a String        |\n"
                      "| leni()   | lens(89243)                 |       5         | Prints the length of a number        |\n"
                      "| exit()   | exit(bi)                    |                 | Exit Bilobe from the console         |\n"
                      "| #        | # This is a comment         |                 | Commenting in Bilobe starts with a # |\n"
                      "| Maths    | (2+2)^2/2*2+2-2             |      16         | Basic Maths with BEDMAS Rules        |\n"
                      "|-------------------------------------------------------------------------------------------------|\n";