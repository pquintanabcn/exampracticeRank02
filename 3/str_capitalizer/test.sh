# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:56:32 by pquintan          #+#    #+#              #
#    Updated: 2022/07/01 08:24:43 by pquintan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra str_capitalizer.c -o str_capitalizer
echo "# Expected result (next line) Your result #"
echo "---"
echo "Premier Petit Test$"
./str_capitalizer "Premier PETIT TesT" | cat -e
echo "---"
echo "Deuxieme Test Un Peu Moins  Facile$
   Attention C'est Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route    E $"
./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
echo "---"
echo "Patri$"
./str_capitalizer "patri" | cat -e
echo "---"
echo "Paula$"
./str_capitalizer "Paula" | cat -e
echo "---"
echo "$"
./str_capitalizer "" | cat -e
rm -rf str_capitalizer