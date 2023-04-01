#pragma once

#include "istatistics.h"

#include <list>


class StdStatistic : public IStatistics
{
public:
	StdStatistic();
	~StdStatistic();

	void		update(double t_next) override;
	double		eval() const override;
	std::string	name() const override;

private:
	double				m_sum;
	std::list<double>	m_nums;
};
