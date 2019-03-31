#ifndef optimization_hpp
#define optimization_hpp

#include <stdio.h>
#include "input.hpp"

// imprime soma total na maquina 2
void print_total_time(vector< vector<int> > jobs, vector<int> order);

// retorna soma total na maquina 2
int total_time_sum(vector< vector<int> > jobs, vector<int> order);

// retorna os tempos finais na maquina 1
vector<int> final_times_m1(vector< vector<int> > jobs, vector<int> order);

// retorna os tempos finais na maquina 2
vector<int> final_times_m2(vector< vector<int> > jobs, vector<int> order);

// calcula o valor para um candidato para limitante dual relaxando o problema em relacao a maquina 1
int s1(vector< vector<int> > jobs, int n, vector<int> m, vector<int> final_times_machine1);

// Calcula o valor para um candidato para limitante dual relaxando o problema em relacao a maquina 2
int s2(vector< vector<int> > jobs, int n, vector<int> m, vector<int> final_times_machine1, vector<int> final_times_machine2);

// calcula estimativa baseada nas relaxacoes
int estimate_lower_bound(vector< vector<int> > jobs, int n, vector<int> m);

#endif /* optimization_hpp */