#include "ProgressState.h"

ProgressState::ProgressState(unsigned int target)
	: m_target(target)
{

}

ProgressState::~ProgressState()
{
}


unsigned int ProgressState::getPercentage()
{
	return 0;
}
