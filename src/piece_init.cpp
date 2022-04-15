#include "bishop.hpp"
#include "rook.hpp"
#include "queen.hpp"

namespace Pieces
{
	void Init()
	{
		r_init();
		b_init();
		q_init();
	}
}