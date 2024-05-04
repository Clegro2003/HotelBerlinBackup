using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Entity
{
    public class Reserva
    {
        public int Id { get; set; }
        public DateTime Fecha { get; set; }
        public Cliente Cliente { get; set; }
        public Administrador Administrador { get; set; }

        public Reserva() 
        {
            Random random = new Random();
            Id = random.Next();
            Fecha = DateTime.Now;
        }

        public Reserva(Cliente cliente, Administrador administrador)
        {
            Cliente = cliente;
            Administrador = administrador;
        }

    }
}
