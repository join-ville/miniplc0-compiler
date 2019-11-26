#include "catch2/catch.hpp"

#include "instruction/instruction.h"
#include "tokenizer/tokenizer.h"
#include "analyser/analyser.h"


#include <sstream>
#include <vector>
/*
TEST_CASE("Test hello world.") {

	std::string input =
		"begin\n"
		"var a;\n"
		"end\n";
	std::stringstream ss;
	ss.str(input);
	miniplc0::Analyser tkz();
	std::vector<miniplc0::Token> output = {};
	std::string s1 = "begin";
	std::string s2 = "var";
	std::string s3 = "a";
	std::string s4 = ";";
	std::string s5 = "end";
	output.emplace_back(std::make_optional<miniplc0::Token>(miniplc0::TokenType::BEGIN, s1, std::make_pair(0, 0), std::make_pair(0, 5)).value());
	output.emplace_back(std::make_optional<miniplc0::Token>(miniplc0::TokenType::VAR, s2, std::make_pair(1, 0), std::make_pair(1, 3)).value());
	output.emplace_back(std::make_optional<miniplc0::Token>(miniplc0::TokenType::IDENTIFIER, s3, std::make_pair(1, 4), std::make_pair(1, 5)).value());
	output.emplace_back(std::make_optional<miniplc0::Token>(miniplc0::TokenType::SEMICOLON, s4, std::make_pair(1, 5), std::make_pair(1, 6)).value());
	output.emplace_back(std::make_optional<miniplc0::Token>(miniplc0::TokenType::END, s5, std::make_pair(2, 0), std::make_pair(2, 3)).value());
	auto result = tkz.AllTokens();
	if (result.second.has_value()) {
		FAIL();
	}
	REQUIRE((result.first == output));

}
*/