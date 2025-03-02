# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:56:32 by pquintan          #+#    #+#              #
#    Updated: 2022/03/16 14:56:58 by pquintan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra inter.c -o inter
echo "# Expected result (next line) Your result #"
echo "---"
echo "padinto$"
./inter zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
echo "---"
echo "df6ewg4$"
./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
echo "---"
echo "rien$"
./inter "rien" "cette phrase ne cache rien" | cat -e
echo "---"
echo "$"
./inter | cat -e
echo "---"
echo "$"
./inter "rien" | cat -e
rm -rf inter