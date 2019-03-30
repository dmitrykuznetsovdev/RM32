#include "main.h"

int main() {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOGEN;
	GPIOG->MODER |= GPIO_MODER_MODER13_0 | GPIO_MODER_MODER14_0;
	GPIOG->BSRR |= GPIO_BSRR_BS13 | GPIO_BSRR_BS14;

	while(1) {

	}
}

