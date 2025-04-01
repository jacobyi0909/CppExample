
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	// 반복문
	// 조건문

	// 1부터 10까지 반복하면서 짝수만 출력하고싶다.
	//for (int i = 1; i <= 10; i++)
	//{
	//    if (i % 2 == 0) {
	//        printf("%d ", i);
	//    }
	//}




	// 배열의 크기를 입력받고싶다.
	// 배열의 각 항목의 값은 index + 1 값을 넣고싶다.
	// 그 배열을 반복문으로 출력하고싶다.

	// 초기세팅
	srand(time(0));
	// 사용
	int rv = rand();
	int spawnList[5];
	bool check[5] = { false, };

	for (int i = 0; i < 5; i++)
	{
		spawnList[i] = i;
	}

	for (int i = 0; i < 5; i++)
	{
		// 스폰위치가 겹치지 않게 랜덤으로 출력되게 하고싶다.
		// 1. 랜덤한 값으로 인덱스 값을 가져온다.
		int ri = rand() % 5;
		for (int j = 0; j < 5; j++)
		{
			// 2. 만약 그 인덱스값으로 check배열의 값이 false라면 
			if (false == check[ri])
			{
				check[ri] = true;
				// 3. 그 인덱에 해당하는 스폰값을 출력하고싶다.
				std::cout << spawnList[ri];
				break;
			}
			ri = (ri + 1) % 5;
			
		}
	}

}
