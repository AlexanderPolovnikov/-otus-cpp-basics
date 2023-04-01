#pragma once

#include "istatistics.h"


class MinStatistic : public IStatistics
{
public:
	MinStatistic();
	~MinStatistic();

	void		update(double t_next) override;
	double		eval() const override;
	std::string	name() const override;

private:
	double m_min;
};
