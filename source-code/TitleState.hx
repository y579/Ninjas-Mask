package;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxState;
class TitleState extends FlxState
{
    var titletext:FlxText;
    
	
    override public function create():Void
    {
        super.create();
        titletext = new FlxText(200, 0, FlxG.width, 'Ninjas Mask', 40);
        titletext.setFormat(null, 32, FlxColor.PINK);
        titletext.alignment = CENTER;
        add(titletext);
    }
	override public function update(elapsed:Float)
	{
        if (FlxG.keys.justPressed.ENTER)
			FlxG.switchState(new PlayState());
    }
}
