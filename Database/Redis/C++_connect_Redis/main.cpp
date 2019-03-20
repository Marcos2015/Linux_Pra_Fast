#include "RedisManager.h"
#include <iostream>
using namespace std;
int main()
{
	
	RedisManager * redisManager = new RedisManager();
	
	if(redisManager)
	{
		redisManager->initial();
	
                redisManager->set("test","nice to meet u!");
	
        	std::string valueStr = redisManager->get("1sdfd");
		
		cout << valueStr << endl;
		
		redisManager->release();
		
		
	
		delete redisManager;
		
	}
	
	
}
