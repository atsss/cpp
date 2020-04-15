.DEFAULT_GOAL := default

SYNC = docker-sync
CONMPOSE = docker-compose

up:
	@$(SYNC) start
	@$(CONMPOSE) up -d
down:
	@$(CONMPOSE) down
	@$(SYNC) clean
restart:
	@$(SYNC) restart
	@$(CONMPOSE) restart
clean:
	@$(CONMPOSE) rm -v -a
default:
	@$(CONMPOSE) exec cpp bash
