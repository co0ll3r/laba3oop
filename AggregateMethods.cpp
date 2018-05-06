#include "CompHeader.h" 
#include <set>

void aggregate::makePerechen(){
	std::set<std::string> UniqueNames;
	for (unsigned i = 0; i < clWorkComp.getMassive().size(); i++)
		UniqueNames.insert(clWorkComp.getMassive()[i].CompInfo.ProcName);

} 
