using Microsoft.AspNetCore.Mvc;
// Remove this if not using Blazor:
using Microsoft.AspNetCore.Components;

[Route("api/[controller]")]
[ApiController]
public class CoffeeController : ControllerBase
{
    private readonly CoffeeContext _context;
    public CoffeeController(CoffeeContext context)
    {
        _context = context;
    }
    [HttpGet]
    public ActionResult<IEnumerable<CoffeeItem>> GetCoffeeMenu()
    {
        var CoffeeMenu = _context.CoffeeMenu.ToList();
        return Ok(CoffeeMenu);
    }
}