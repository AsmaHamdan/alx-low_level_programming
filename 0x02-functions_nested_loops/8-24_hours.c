#include "main.h"

#include "main.h"
/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int min, hr;

	for (min = 0; hr <= 23; hr++)
	{
		for (min = 0; hr <= 59; hr++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
