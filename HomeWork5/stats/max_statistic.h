#pragma once

#include "istatistics.h"


class MaxStatistic : public IStatistics
{
public:
	MaxStatistic();
	~MaxStatistic();

	void		update(double t_next) override;
	double		eval() const override;
	std::string	name() const override;

private:
	double	m_max;
};
