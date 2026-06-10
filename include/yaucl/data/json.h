//
// Created by giacomo on 14/11/2021.
//

#ifndef KNOBAB_JSON_H
#define KNOBAB_JSON_H

// The ANTLR4 runtime #undefs the stdio EOF macro; nlohmann/json needs it.
#ifndef EOF
#define EOF (-1)
#endif

#include <nlohmann/json.hpp>
#define UNESCAPE(x)                  nlohmann::json::parse(x).get<std::string>()

#endif //KNOBAB_JSON_H
