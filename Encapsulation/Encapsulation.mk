##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Encapsulation
ConfigurationName      :=Debug
WorkspacePath          :=/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns
ProjectPath            :=/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Encapsulation
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jade Chang
Date                   :=09/04/2020
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
ObjectsFileList        :="Encapsulation.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) $(IntermediateDirectory)/PayOff.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Encapsulation/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix): Random1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Random1.cpp$(DependSuffix) -MM Random1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Encapsulation/Random1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Random1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Random1.cpp$(PreprocessSuffix): Random1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Random1.cpp$(PreprocessSuffix) Random1.cpp

$(IntermediateDirectory)/PayOff.cpp$(ObjectSuffix): PayOff.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PayOff.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PayOff.cpp$(DependSuffix) -MM PayOff.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jadechang/Documents/GitHub/DerivativesPricing_DesignPatterns/Encapsulation/PayOff.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PayOff.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PayOff.cpp$(PreprocessSuffix): PayOff.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PayOff.cpp$(PreprocessSuffix) PayOff.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


