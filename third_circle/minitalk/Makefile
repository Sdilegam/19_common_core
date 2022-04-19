# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 11:25:36 by sdi-lega          #+#    #+#              #
#    Updated: 2022/04/08 13:09:56 by sdi-lega         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#																			   #
#									VARIABLES								   #
#																			   #
################################################################################

NAME			=	minitalk

#####################################
#									#
#			Directories				#
#									#
#####################################

SOURCES_DIR		=	sources/
SUB_DIR			=	mandatory/
OBJECTS_DIR		=	${SOURCES_DIR}${SUB_DIR}objects/
LIB_DIR			=	libraries/ft_printf/

#####################################
#									#
#			Sources & objects		#
#									#
#####################################

SERVER_SOURCES	=	server${SUFFIX}.c
CLIENT_SOURCES	=	client${SUFFIX}.c
UTILS_SOURCES	=	minitalk_utils${SUFFIX}.c

OBJECTS			=	${SERVER_OBJECTS} ${CLIENT_OBJECTS} ${UTILS_OBJECTS}
SERVER_OBJECTS	=	${OBJECTS_DIR}${SERVER_SOURCES:.c=.o}
CLIENT_OBJECTS	=	${OBJECTS_DIR}${CLIENT_SOURCES:.c=.o}
UTILS_OBJECTS	=	${OBJECTS_DIR}${UTILS_SOURCES:.c=.o}
DEPENDS			=	${OBJECTS:.o=.d}
LIBRARIES		=	${LIB_DIR}libftprintf.a
EXECUTABLES		=	server${SUFFIX} client${SUFFIX}

#####################################
#									#
#				OTHERS				#
#									#
#####################################

CC				=	gcc
CC_FLAGS		=	-Iincludes -Wall -Werror -Wextra
RM				=	rm -f
SLEEP_TIME		=	0.01
SILENT			=	@
SUFFIX			=


################################################################################
#																			   #
#										RULES								   #
#																			   #
################################################################################

#####################################
#									#
#				GENERAL				#
#									#
#####################################

all:				mandatory bonus
${NAME}:			mandatory
mandatory:			${OBJECTS_DIR} ${EXECUTABLES}
bonus:				
			${SILENT} mkdir -p ${SOURCES_DIR}bonus/objects/
			${SILENT} make ${addsuffix _bonus, ${EXECUTABLES}} SUFFIX=_bonus SUB_DIR=bonus/ 
			

re: 				fclean all
#####################################
#									#
#				COMPILING			#
#									#
#####################################

server${SUFFIX}:	${SERVER_OBJECTS} ${UTILS_OBJECTS} ${LIBRARIES}
			${SILENT} echo "\r\"$@\" executable created\033[K"
			${SILENT} ${CC} $^ -o $@
			${SILENT} sleep ${SLEEP_TIME}
			

client${SUFFIX}:	${CLIENT_OBJECTS} ${UTILS_OBJECTS} ${LIBRARIES}
			${SILENT} echo "\r\"$@\" executable created\033[K"
			${SILENT} ${CC} $^ -o $@
			${SILENT} sleep ${SLEEP_TIME}

${OBJECTS_DIR}%.o:	${SOURCES_DIR}${SUB_DIR}%.c
			${SILENT} echo  "\rCreating \"${@F:.c=.o}\".\033[K\c"
			${SILENT} ${CC} ${CC_FLAGS} -MMD -c $< -o ${OBJECTS_DIR}${@F:.c=.o}
			${SILENT} sleep ${SLEEP_TIME}

${LIBRARIES}:
			 make -C $(@D)
			 make clean -C $(@D)
			
-include ${DEPENDS}

#####################################
#									#
#				CLEANING			#
#									#
#####################################

clean:

			${SILENT} echo "\rRemoving objects files (${notdir ${OBJECTS}}).\033[K\c"
			${SILENT} ${RM} ${OBJECTS} ${DEPENDS}
			${SILENT} sleep ${SLEEP_TIME}

clean_bonus:

			${SILENT} echo "\rSwitching to bonus files.\033[K\c"
			${SILENT} make clean SUFFIX=_bonus SUB_DIR=bonus/
			${SILENT} make clean_exe SUFFIX=_bonus SUB_DIR=bonus/

clean_libs:

			${SILENT} echo "\rRemoving libraries (${notdir ${LIBRARIES}}).\033[K\c"
			${SILENT} ${RM} ${LIBRARIES}
			${SILENT} sleep ${SLEEP_TIME}

clean_exe:

			${SILENT} echo "\rRemoving executables (${notdir ${EXECUTABLES}}).\033[K\c"
			${SILENT} ${RM} ${EXECUTABLES} ${EXECUTABLES}${SUFFIX}
			${SILENT} sleep ${SLEEP_TIME}

fclean:		clean clean_libs clean_exe clean_bonus
			${SILENT} echo "\rEverything removed.\033[K"
				
#####################################
#									#
#			INITIALIZATION			#
#									#
#####################################

${OBJECTS_DIR}:
			mkdir ${OBJECTS_DIR}

start:				
			${SILENT} mkdir -p sources/mandatory/objects
			${SILENT} mkdir -p sources/bonus/objects
			${SILENT} mkdir -p includes
			${SILENT} mkdir -p libraries
			${SILENT} touch -a ${addprefix ${SOURCES_DIR}${SUB_DIR}, ${SOURCES}}

.phony: 	fclean clean clean_bonus clean_libs clean_exe start all mandatory bonus re 