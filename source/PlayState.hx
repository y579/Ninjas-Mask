package;
import flixel.system.FlxSplash;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;

class PlayState extends FlxState
{
	var bosslmao:FlxSprite;
	var enemy:FlxSprite;
	var enemyname:String;
	var jumpSplash:FlxSplash;
	var bossname:String;
	var upgrades:Array<String>;
	var bosstitle:String; // this is underneath boss name
	var ground:FlxSprite;
	var ninjaguy:FlxSprite;
	var playerhealth:Int;
	var	enemyhealth:Int;
	override public function create()
	{
		super.create();

		ninjaguy = new FlxSprite();
		ninjaguy.loadGraphic(AssetPaths.NinjaSprite__png);
		add(ninjaguy);
		/*
		 switch (enemyname) 
		{
				
		}
		switch (bossname)
		{

		}
		*/
	}

	
	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		if (FlxG.keys.justReleased.ESCAPE)
			FlxG.switchState(new TitleState());
		}
}
