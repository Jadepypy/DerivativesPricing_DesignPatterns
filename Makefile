.PHONY: clean All

All:
	@echo "----------Building project:[ Wrapper_and_Decoration - Debug ]----------"
	@cd "Wrapper_and_Decoration" && "$(MAKE)" -f  "Wrapper_and_Decoration.mk"
clean:
	@echo "----------Cleaning project:[ Wrapper_and_Decoration - Debug ]----------"
	@cd "Wrapper_and_Decoration" && "$(MAKE)" -f  "Wrapper_and_Decoration.mk" clean
