#include "I_Printable.h"

ostream& operator<<(ostream& os, const I_Printable& obj)
{
	obj.print(os);
	return os;
}