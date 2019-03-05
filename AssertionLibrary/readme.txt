This library project provides a set of assertion methods useful for writing Esdl tests. 

Note that no concrete assertion logic is included. All provided functions are in form of interfaces (external Esdl methods). During test execution, the actual assertions are expanded accordingly 
to which underlying testing framework (e.g. google test, cmocka) was selected.

The target Esdl test project must define explicit reference to AssertionLibrary.
