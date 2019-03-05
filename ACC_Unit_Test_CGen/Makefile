# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=ACC_Unit_Test
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

MODEL_OBJECTS=$(OUTPUT_CONFIG)/src/ACC_Unit_Test_Automatic.o $(OUTPUT_CONFIG)/src/components_SteckeTest_Automatic.o $(OUTPUT_CONFIG)/src/components_SteckeTest_testStecke1_Automatic.o $(OUTPUT_CONFIG)/src/components_SteckeTest_testStecke2_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOffTest_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOffTest_testOn_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOffTest_testOff_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOffTest_testOnFailure_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOffTest_testOffFailure_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSiTest_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi1_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi2_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi3_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi4_Automatic.o $(OUTPUT_CONFIG)/src/components_HillsValleysTest_Automatic.o $(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_Automatic.o $(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_setCorrectV_Automatic.o $(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_resetCorrectV_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_enableFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedbackTest_disableFeedbackTest_Automatic.o $(OUTPUT_CONFIG)/src/interfaces_interfaces_Automatic.o $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o $(OUTPUT_CONFIG)/src/components_Globals_Automatic.o $(OUTPUT_CONFIG)/src/components_Stecke_Automatic.o $(OUTPUT_CONFIG)/src/components_OnOff_Automatic.o $(OUTPUT_CONFIG)/src/components_FuSi_Automatic.o $(OUTPUT_CONFIG)/src/components_DetectCurrentVelocity_Automatic.o $(OUTPUT_CONFIG)/src/components_AccFeedback_Automatic.o 
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

$(OUTPUT_CONFIG)/src/components_SteckeTest_Automatic.o: src/components_SteckeTest_Automatic.c src/components_SteckeTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_SteckeTest_testStecke1_Automatic.o: src/components_SteckeTest_testStecke1_Automatic.c src/components_SteckeTest_testStecke1_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_SteckeTest_testStecke2_Automatic.o: src/components_SteckeTest_testStecke2_Automatic.c src/components_SteckeTest_testStecke2_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOffTest_Automatic.o: src/components_OnOffTest_Automatic.c src/components_OnOffTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOffTest_testOn_Automatic.o: src/components_OnOffTest_testOn_Automatic.c src/components_OnOffTest_testOn_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOffTest_testOff_Automatic.o: src/components_OnOffTest_testOff_Automatic.c src/components_OnOffTest_testOff_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOffTest_testOnFailure_Automatic.o: src/components_OnOffTest_testOnFailure_Automatic.c src/components_OnOffTest_testOnFailure_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOffTest_testOffFailure_Automatic.o: src/components_OnOffTest_testOffFailure_Automatic.c src/components_OnOffTest_testOffFailure_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSiTest_Automatic.o: src/components_FuSiTest_Automatic.c src/components_FuSiTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi1_Automatic.o: src/components_FuSiTest_testFuSi1_Automatic.c src/components_FuSiTest_testFuSi1_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi2_Automatic.o: src/components_FuSiTest_testFuSi2_Automatic.c src/components_FuSiTest_testFuSi2_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi3_Automatic.o: src/components_FuSiTest_testFuSi3_Automatic.c src/components_FuSiTest_testFuSi3_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSiTest_testFuSi4_Automatic.o: src/components_FuSiTest_testFuSi4_Automatic.c src/components_FuSiTest_testFuSi4_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_HillsValleysTest_Automatic.o: src/components_HillsValleysTest_Automatic.c src/components_HillsValleysTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_Automatic.o: src/components_DetectCurrentVelocityTest_Automatic.c src/components_DetectCurrentVelocityTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_setCorrectV_Automatic.o: src/components_DetectCurrentVelocityTest_setCorrectV_Automatic.c src/components_DetectCurrentVelocityTest_setCorrectV_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_DetectCurrentVelocityTest_resetCorrectV_Automatic.o: src/components_DetectCurrentVelocityTest_resetCorrectV_Automatic.c src/components_DetectCurrentVelocityTest_resetCorrectV_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_Automatic.o: src/components_AccFeedbackTest_Automatic.c src/components_AccFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_enableFeedbackTest_Automatic.o: src/components_AccFeedbackTest_enableFeedbackTest_Automatic.c src/components_AccFeedbackTest_enableFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_AccFeedbackTest_disableFeedbackTest_Automatic.o: src/components_AccFeedbackTest_disableFeedbackTest_Automatic.c src/components_AccFeedbackTest_disableFeedbackTest_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/interfaces_interfaces_Automatic.o: src/interfaces_interfaces_Automatic.c src/interfaces_interfaces_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Globals_Automatic.o: src/components_Globals_Automatic.c src/components_Globals_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_Stecke_Automatic.o: src/components_Stecke_Automatic.c src/components_Stecke_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_OnOff_Automatic.o: src/components_OnOff_Automatic.c src/components_OnOff_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_FuSi_Automatic.o: src/components_FuSi_Automatic.c src/components_FuSi_Automatic.h $(OUTPUT_CONFIG)/src
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/components_DetectCurrentVelocity_Automatic.o: src/components_DetectCurrentVelocity_Automatic.c src/components_DetectCurrentVelocity_Automatic.h $(OUTPUT_CONFIG)/src
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
