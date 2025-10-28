#include "paciente.h"
#include "medico.h"
#include "consulta.h"
#include "exame.h"
#include "receita.h"
#include "recepcionista.h"
#include "pagamento.h"
#include <iostream>

int main() {
    Paciente p("João Silva", "123.456.789-00");
    Medico m("Dra. Ana", "Cardiologia");
    Recepcionista r("Carla");

    // Agendar consulta
    auto consulta = r.agendarConsulta(p, m, "27/10/2025");
    consulta.setDiagnostico("Pressão Alta");

    // Emitir receita
    auto receita = m.emitirReceita(p, "Losartana 50mg");
    std::cout << receita.getDescricao() << "\n";

    // Solicitar exame
    Exame exame(p, m, "Eletrocardiograma", "28/10/2025");
    exame.registrarResultado("Normal");
    std::cout << exame.getDescricao() << "\n";

    // Registrar pagamento de exame
    auto pagamento = r.registrarPagamento(p, 150.0, "PIX", "28/10/2025");
    std::cout << pagamento.getResumo() << "\n";

    return 0;
}
