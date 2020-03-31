.DEFAULT_GOAL := default

FIG = docker-compose

up:
	@docker-sync start
	@$(FIG) up -d
down:
	@$(FIG) down
	@docker-sync clean
restart:
	@docker-sync restart
	@$(FIG) restart
clean:
	@$(FIG) rm -v -a
default:
	@$(FIG) exec cpp bash
