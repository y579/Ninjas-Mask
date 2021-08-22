package;
import flixel.system.FlxSplash;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;

class PlayState extends FlxState
{
	var bosslmao:FlxSprite;
	var enemy:FlxSprite;
	var jumpSplash:FlxSplash;
	var ground:FlxSprite;
	var ninjaguy:FlxSprite;
	var playerhealth:Int = 3;
	var enemyhealth:Int = 5;
	override public function create()
	{
		super.create();

		ninjaguy = new FlxSprite();
		ninjaguy.loadGraphic(AssetPaths.NinjaSprite__png);
		add(ninjaguy);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justReleased.ESCAPE)
			FlxG.switchState(new TitleState());
		}
}