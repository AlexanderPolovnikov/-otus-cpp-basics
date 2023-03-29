#pragma once
#include <string>
#include "userscore.h"

void initConfig(const std::string& t_configPath);
bool getTable(std::string& t_table);
bool recordTheScore(const UserScore& t_us, std::string& t_resultTable);
