# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=AccFeedbackTest
TEST_EXE=$(OUTPUT_CONFIG)/$(TEST_BASE_NAME).exe
MKDIR_CMD=mkdir -p

# Google test config
GOOGLE_TEST_INC=-IgoogleTestLib
GOOGLE_TEST_OUTDIR=$(OUTPUT_CONFIG)/googleTestLib/gtest
GOOGLE_TEST_OBJECTS=$(GOOGLE_TEST_OUTDIR)/gtest-all.o\
  $(OUTPUT_CONFIG)/tests/AllTests.o

INC=$(GOOGLE_TEST_INC) -Iinclude -Isrc -Itests
COMMON_FLAGS=-O0 -g3 -Wall -c -fmessage-length=0 -DSINGLE_THREADED
CPPFLAGS=$(COMMON_FLAGS)
CFLAGS=$(COMMON_FLAGS) -Wno-unused -ansi

MODEL_OBJECTS=$(OUTPUT_CONFIG)/src/ACC_Unit_Test_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_enableFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_disableFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o $(OUTPUT_CONFIG)/src/components_Globals_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedback_Automatic.o 
LIB_PATHS=$(pathcnv SN, C:/Users/Admin/ETAS/ASCET-DEVELOPER-7.4.0/Projektarbeit/ACC_Unit_Test_CGen/lib\
  C:/Users/Admin/ETAS/ASCET-DEVELOPER-7.4.0/Projektarbeit/ACC_Unit_Test)
LIB_PATHS_OPTIONS := $(foreach PATH,$(LIB_PATHS),-L$(PATH))
LIB_FILES_OPTIONS=-lESDL_Linear_Interpolation_x86 

# Google test: compile rules google test gtest-all.cc
$(GOOGLE_TEST_OUTDIR)/gtest-all.o: googleTestLib/gtest/gtest-all.cc $(GOOGLE_TEST_OUTDIR)
	g++ $(INC) $(CPPFLAGS) -o $@ $<

# Google test: compile rules google test entry component AllTests.cpp
$(OUTPUT_CONFIG)/tests/AllTests.o: tests/AllTests.cpp $(OUTPUT_CONFIG)/tests
	g++ $(INC) $(CPPFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/ACC_Unit_Test_Automatic.o: src/ACC_Unit_Test_Automatic.c src/ACC_Unit_Test_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_Automatic.o: src/components_AccFeedbackTest_Automatic.c src/components_AccFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_enableFeedbackTest_Automatic.o: src/components_AccFeedbackTest_enableFeedbackTest_Automatic.c src/components_AccFeedbackTest_enableFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_disableFeedbackTest_Automatic.o: src/components_AccFeedbackTest_disableFeedbackTest_Automatic.c src/components_AccFeedbackTest_disableFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Globals_Automatic.o: src/components_Globals_Automatic.c src/components_Globals_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedback_Automatic.o: src/components_AccFeedback_Automatic.c src/components_AccFeedback_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<


all:: $(TEST_EXE)

clean::
	rmdir $(OUTPUT_CONFIG)

$(GOOGLE_TEST_OUTDIR):
	$(MKDIR_CMD) $@

$(OUTPUT_CONFIG)/src:
	$(MKDIR_CMD) $@

$(OUTPUT_CONFIG)/tests:
	$(MKDIR_CMD) $@

$(TEST_EXE): $(GOOGLE_TEST_OUTDIR) $(OUTPUT_CONFIG)/src $(OUTPUT_CONFIG)/tests $(MODEL_OBJECTS) $(GOOGLE_TEST_OBJECTS)
	g++ -o $@ -static $(MODEL_OBJECTS) $(GOOGLE_TEST_OBJECTS) $(LIB_PATHS_OPTIONS) $(LIB_FILES_OPTIONS)
