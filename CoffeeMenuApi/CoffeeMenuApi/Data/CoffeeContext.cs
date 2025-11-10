using System.Security.Cryptography.X509Certificates;
using Microsoft.EntityFrameworkCore;

public class CoffeeContext : DbContext
{
    public CoffeeContext(DbContextOptions<CoffeeContext> option) : base(option)
    {
    }
    public DbSet<CoffeeItem> CoffeeMenu { get; set; }
}