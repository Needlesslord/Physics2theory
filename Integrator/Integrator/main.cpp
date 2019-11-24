#include "object.h"
#include "Window.h"
#include "SDL/include/SDL.h"


class Window;

int main(int argc, char* argv[])
{
	
	
	double time;
	int newton;

	object sphere;
	object obstacle;

	//obstacle
	obstacle.setX(5.0);
	obstacle.setY(0.0);
	obstacle.setAX(0.0);
	obstacle.setAY(0.0);
	obstacle.setVX(0.0);
	obstacle.setVY(0.0);
	obstacle.setRadius(1.0);
	obstacle.setDensity(HUGE_VAL);


	sphere.enterData();

	std::cout << "How many seconds will the simulation last? ";
	std::cin >> time;
	std::cout << std::endl;

	sphere.update(time, obstacle, 1);

	std::cout << std::endl;
	std::cout << "Enter '1' if you want to compare the results with Newton's laws" << std::endl;
	std::cout << "Enter '0' if you want to exit" << std::endl << std::endl;
	std::cin >> newton;

	if (newton == 1)
	{
		sphere.NewtonsLawsMRUA();
	}
	else
	{
		system("pause");
	}

	return 0;
}