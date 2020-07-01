##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Wrapper_and_Decoration
ConfigurationName      :=Debug
WorkspacePath          :=/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns
ProjectPath            :=/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jade Chang
Date                   :=26/05/2020
CodeLitePath           :="/Users/jadechang/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Wrapper_and_Decoration.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/private/var/folders/nj/1bb6sscs2vn_35qb73tnx4yc0000gn/T/AppTranslocation/38269095-5C3E-4A05-9852-28DFB9E0C3D6/d/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/ConvergenceTable.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vanilla1.cpp$(ObjectSuffix) $(IntermediateDirectory)/SimpleMC4.cpp$(ObjectSuffix) $(IntermediateDirectory)/Parameters.cpp$(ObjectSuffix) $(IntermediateDirectory)/MCStatistics.cpp$(ObjectSuffix) $(IntermediateDirectory)/PayOffBridge.cpp$(ObjectSuffix) $(IntermediateDirectory)/PayOff3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/ConvergenceTable.cpp$(ObjectSuffix): ConvergenceTable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ConvergenceTable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ConvergenceTable.cpp$(DependSuffix) -MM ConvergenceTable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/ConvergenceTable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ConvergenceTable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ConvergenceTable.cpp$(PreprocessSuffix): ConvergenceTable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ConvergenceTable.cpp$(PreprocessSuffix) ConvergenceTable.cpp

$(IntermediateDirectory)/Vanilla1.cpp$(ObjectSuffix): Vanilla1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Vanilla1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Vanilla1.cpp$(DependSuffix) -MM Vanilla1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/Vanilla1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vanilla1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vanilla1.cpp$(PreprocessSuffix): Vanilla1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vanilla1.cpp$(PreprocessSuffix) Vanilla1.cpp

$(IntermediateDirectory)/SimpleMC4.cpp$(ObjectSuffix): SimpleMC4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SimpleMC4.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SimpleMC4.cpp$(DependSuffix) -MM SimpleMC4.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/SimpleMC4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SimpleMC4.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SimpleMC4.cpp$(PreprocessSuffix): SimpleMC4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SimpleMC4.cpp$(PreprocessSuffix) SimpleMC4.cpp

$(IntermediateDirectory)/Parameters.cpp$(ObjectSuffix): Parameters.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Parameters.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Parameters.cpp$(DependSuffix) -MM Parameters.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/Parameters.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Parameters.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Parameters.cpp$(PreprocessSuffix): Parameters.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Parameters.cpp$(PreprocessSuffix) Parameters.cpp

$(IntermediateDirectory)/MCStatistics.cpp$(ObjectSuffix): MCStatistics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MCStatistics.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MCStatistics.cpp$(DependSuffix) -MM MCStatistics.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/MCStatistics.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MCStatistics.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MCStatistics.cpp$(PreprocessSuffix): MCStatistics.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MCStatistics.cpp$(PreprocessSuffix) MCStatistics.cpp

$(IntermediateDirectory)/PayOffBridge.cpp$(ObjectSuffix): PayOffBridge.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PayOffBridge.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PayOffBridge.cpp$(DependSuffix) -MM PayOffBridge.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/PayOffBridge.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PayOffBridge.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PayOffBridge.cpp$(PreprocessSuffix): PayOffBridge.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PayOffBridge.cpp$(PreprocessSuffix) PayOffBridge.cpp

$(IntermediateDirectory)/PayOff3.cpp$(ObjectSuffix): PayOff3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PayOff3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PayOff3.cpp$(DependSuffix) -MM PayOff3.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/PayOff3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PayOff3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PayOff3.cpp$(PreprocessSuffix): PayOff3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PayOff3.cpp$(PreprocessSuffix) PayOff3.cpp

$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix): Random1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Random1.cpp$(DependSuffix) -MM Random1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Wrapper_and_Decoration/Random1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Random1.cpp$(PreprocessSuffix): Random1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Random1.cpp$(PreprocessSuffix) Random1.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


