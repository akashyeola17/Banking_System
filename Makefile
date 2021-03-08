.PHONY: clean All

All:
	@echo "----------Building project:[ BankingManagementSystem - Debug ]----------"
	@cd "BankingManagementSystem" && "$(MAKE)" -f  "BankingManagementSystem.mk"
clean:
	@echo "----------Cleaning project:[ BankingManagementSystem - Debug ]----------"
	@cd "BankingManagementSystem" && "$(MAKE)" -f  "BankingManagementSystem.mk" clean
