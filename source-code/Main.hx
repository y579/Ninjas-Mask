package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	var skipSplash:Bool = true;
	
	public function new()
	{
	
		super();
		addChild(new FlxGame(0, 0, TitleState));
	}
}
