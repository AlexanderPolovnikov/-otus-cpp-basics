#pragma once

#include "constants.h"

#include <vector>


class IStatistics;


ConsoleArgs							parseConsoleArgs(int t_argc, char** t_argv);
void								printHelp();
std::vector<IStatistics*>	initStatistics(const ConsoleArgs &t_consoleArgs);
void								readSequence(std::vector<IStatistics*> &t_statistics);
