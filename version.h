#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char DATE[] = "24";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2016";
	static const char UBUNTU_VERSION_STYLE[] =  "16.03";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 3;
	static const long BUILD  = 134;
	static const long REVISION  = 687;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 175;
	#define RC_FILEVERSION 1,3,134,687
	#define RC_FILEVERSION_STRING "1, 3, 134, 687\0"
	static const char FULLVERSION_STRING [] = "1.3.134.687";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 35;
	

#endif //VERSION_H