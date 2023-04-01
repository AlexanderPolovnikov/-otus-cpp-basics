#pragma once

#include "istatistics.h"


class MeanStatistic : public IStatistics
{
public:
	MeanStatistic();
	~MeanStatistic();

	void		update(double t_next) override;
	double		eval() const override;
	std::string	name() const override;

private:
	double	m_sum;
	int		m_numCount;
};
