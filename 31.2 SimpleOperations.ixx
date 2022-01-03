// 31.2 SimpleOperations.ixx: module interface unit

export module SimpleOperations;

export int AddIntegers(int a, int b);
export int SubtractIntegers(int a, int b);
export class PairNums
{
public:
   int lhs, rhs;

   PairNums(int a, int b) :lhs(a), rhs(b) {}
};

void FuncNotVisibleOutsideModule();

namespace NamespaceInModule
{
   export int t1;
}